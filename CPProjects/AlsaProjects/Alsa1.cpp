#include <alsa/asoundlib.h>
#include <iostream>

snd_pcm_t *_soundDevice;

bool Init(const char *name)
{

	int i, err;
	snd_pcm_hw_params_t *hw_params;
	//if 1	
	if( name == NULL )
	{
		err = snd_pcm_open( &_soundDevice, "plughw:0,0", SND_PCM_STREAM_PLAYBACK, 0 );
		//std::cout << err;
	}
	else
	{
		err = snd_pcm_open(&_soundDevice, name, SND_PCM_STREAM_PLAYBACK, 0 );
		//std::cout << err;
	}
	//if 2
	if( err < 0 )
	{
		std::cout << "init: cannot open audio devie " << name << " (" << snd_strerror (err) << ")" << std::endl;
		std::cout << err << std::endl;
		return false;
	}
	else
	{
		std::cout << "audio device opened successfully." << std::endl;
	}
	//if 3
	if ((err = snd_pcm_hw_params_malloc (&hw_params)) < 0 )
	{
		std::cout << "init: cannot allocate hardware parameter structure (" << snd_strerror (err) << ")" << endl;
		return false;
	}
	//if 4
	if ((err = snd_pcm_hw_params_any (_soundDevice, hw_params)) < 0 )
	{
		std::cout << "init: cannot initialize hardware parameter structure (" << snd_strerror (err) << ")" << std::endl;
		return false;
	}
	unsigned int resample = 1;
	err = snd_pcm_hw_params_set_rate_resample(_soundDevice, hw_params, resample);
	//if 5
	if (err < 0)
	{
		std::cout << "init: resampling setup failed for playback: " << snd_strerror (err) << std::endl;
		return err;
	}
	//if 6
	if ((err = snd_pcm_hw_params_set_access (_soundDevice, hw_params, SND_PCM_ACCESS_RW_INTERLEAVED) < 0)
	{
		std::cout << "init: cannot set access type (" << snd_strerror (err) << ")" << st::endl;
		return false;
	}
	return true;

}

 
bool UnInit()
{
	snd_pcm_close (_soundDevice);
	std::cout << "audio device has been uninitialized" << std::endl;
	return true;
}

int main()
{
	//err = snd_pcm_open( &_soundDevice, "plughw:0,0", SND_PCM_STREAM_PLAYBACK, 0 );
	Init(NULL);
	UnInit();
	return 0;
}
