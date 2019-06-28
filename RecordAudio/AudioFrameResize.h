#pragma once
/*
*  ʹ��fifo���ò�ͬ��ʽ����Ƶ֡��С
*  ����ʹ��4.13�汾ffmpeg
*  2019-6-27
*/

#ifdef __cplusplus
extern "C"
{
	#endif

#include <libavcodec\avcodec.h>
//#include <libavutil\opt.h>
//#include "libavformat/avformat.h"
//#include "libswscale/swscale.h"
//#include "libavdevice/avdevice.h"
#include "libavutil/audio_fifo.h"

//#pragma comment(lib, "avfilter.lib")
#pragma comment(lib, "avcodec.lib")
#pragma comment(lib, "avutil.lib")
//#pragma comment(lib, "avformat.lib")
//#pragma comment(lib, "avdevice.lib")
	//#ifdef __cplusplus
};
//#endif

class CAudioFrameResize
{
public:
	CAudioFrameResize();
	~CAudioFrameResize();

public:
	int Init(AVCodecContext* dec_ctx);
	int WriteFrame(AVFrame* frame);
	int ReadFrame(AVFrame* frame);

private:
	AVCodecContext* mOutAVcodec_ctx;
	AVAudioFifo* mFifo;
};

