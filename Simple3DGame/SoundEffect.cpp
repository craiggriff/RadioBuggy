//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#include "pch.h"
#include "SoundEffect.h"
//#include "DirectXHelper.h"

SoundEffect::SoundEffect() :
m_audioAvailable(false)
{
}

//----------------------------------------------------------------------

void SoundEffect::Initialize(
	_In_ IXAudio2 *masteringEngine,
	_In_ WAVEFORMATEX *sourceFormat,
	_In_ Platform::Array<byte>^ soundData)
{
	m_soundData = soundData;

	if (masteringEngine == nullptr)
	{
		// Audio is not available so just return.
		m_audioAvailable = false;
		return;
	}

	// Create a source voice for this sound effect.
	DX::ThrowIfFailed(
		masteringEngine->CreateSourceVoice(
		&m_sourceVoice,
		sourceFormat
		)
		);
	m_audioAvailable = true;
}

//----------------------------------------------------------------------

void SoundEffect::PlaySound(_In_ float volume)
{
	XAUDIO2_BUFFER buffer = { 0 };

	if (!m_audioAvailable)
	{
		// Audio is not available so just return.
		return;
	}

	// Interrupt sound effect if it is currently playing.
	DX::ThrowIfFailed(
		m_sourceVoice->Stop()
		);
	DX::ThrowIfFailed(
		m_sourceVoice->FlushSourceBuffers()
		);

	// Queue the memory buffer for playback and start the voice.
	buffer.AudioBytes = m_soundData->Length;
	buffer.pAudioData = m_soundData->Data;
	buffer.Flags = XAUDIO2_END_OF_STREAM;

	DX::ThrowIfFailed(
		m_sourceVoice->SetVolume(volume)
		);
	DX::ThrowIfFailed(
		m_sourceVoice->SubmitSourceBuffer(&buffer)
		);
	DX::ThrowIfFailed(
		m_sourceVoice->Start()
		);
}

//----------------------------------------------------------------------
