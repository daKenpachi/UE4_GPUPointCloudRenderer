/*************************************************************************************************
* Written by Valentin Kraft <valentin.kraft@online.de>, http://www.valentinkraft.de, 2018
**************************************************************************************************/

#include "CoreMinimal.h"
#include "GPUPointCloudStreamingCore.h"
#include "Modules/ModuleManager.h"
#include "IGPUPointCloudRenderer.h"

class FGPUPointCloudRendererPlugin : public IGPUPointCloudRenderer
{

	virtual void StartupModule() override
	{
	}

	virtual void ShutdownModule() override
	{
	}

	/**
	* Returns a instance of the Point Cloud Core class.
	*/
	FGPUPointCloudStreamingCore* CreateStreamingInstance(UMaterialInstanceDynamic* pointCloudShaderDynInstance) {
		return new FGPUPointCloudStreamingCore(pointCloudShaderDynInstance);
	}
};

IMPLEMENT_MODULE(FGPUPointCloudRendererPlugin, GPUPointCloudRenderer)
