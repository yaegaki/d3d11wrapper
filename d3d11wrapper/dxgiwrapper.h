#pragma once

#include <dxgi1_6.h>

struct IDXGISwapChainWrapper : public IDXGISwapChain4
{
	IDXGISwapChain* pImpl;
	IDXGISwapChain1* pImpl1;
	IDXGISwapChain2* pImpl2;
	IDXGISwapChain3* pImpl3;
	IDXGISwapChain4* pImpl4;

	IDXGISwapChainWrapper(IDXGISwapChain* pImpl_) : pImpl(pImpl_), pImpl1(nullptr), pImpl2(nullptr), pImpl3(nullptr), pImpl4(nullptr)
	{
		HRESULT hr;
		hr = pImpl->QueryInterface(&pImpl1);
		if (FAILED(hr)) return;
		pImpl1->Release();

		hr = pImpl->QueryInterface(&pImpl2);
		if (FAILED(hr)) return;
		pImpl2->Release();

		hr = pImpl->QueryInterface(&pImpl3);
		if (FAILED(hr)) return;
		pImpl3->Release();

		hr = pImpl->QueryInterface(&pImpl4);
		if (FAILED(hr)) return;
		pImpl4->Release();
	}

	virtual HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override
	{
		if (
			riid == __uuidof(IDXGISwapChain) ||
			(riid == __uuidof(IDXGISwapChain1) && pImpl1 != nullptr) ||
			(riid == __uuidof(IDXGISwapChain2) && pImpl2 != nullptr) ||
			(riid == __uuidof(IDXGISwapChain3) && pImpl3 != nullptr) ||
			(riid == __uuidof(IDXGISwapChain4) && pImpl4 != nullptr)
			)
		{
			AddRef();
			*ppvObject = this;
			return S_OK;
		}

		return pImpl->QueryInterface(riid, ppvObject);
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return pImpl->AddRef();
	}
	virtual ULONG __stdcall Release(void) override
	{
		return pImpl->Release();
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID Name, UINT DataSize, const void* pData) override
	{
		return pImpl->SetPrivateData(Name, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID Name, const IUnknown* pUnknown) override
	{
		return pImpl->SetPrivateDataInterface(Name, pUnknown);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID Name, UINT* pDataSize, void* pData) override
	{
		return pImpl->GetPrivateData(Name, pDataSize, pData);
	}
	virtual HRESULT __stdcall GetParent(REFIID riid, void** ppParent) override
	{
		return pImpl->GetParent(riid, ppParent);
	}
	virtual HRESULT __stdcall GetDevice(REFIID riid, void** ppDevice) override
	{
		return pImpl->GetDevice(riid, ppDevice);
	}
	virtual HRESULT __stdcall Present(UINT SyncInterval, UINT Flags) override
	{
		return pImpl->Present(SyncInterval, Flags);
	}
	virtual HRESULT __stdcall GetBuffer(UINT Buffer, REFIID riid, void** ppSurface) override
	{
		return pImpl->GetBuffer(Buffer, riid, ppSurface);
	}
	virtual HRESULT __stdcall SetFullscreenState(BOOL Fullscreen, IDXGIOutput* pTarget) override
	{
		return pImpl->SetFullscreenState(Fullscreen, pTarget);
	}
	virtual HRESULT __stdcall GetFullscreenState(BOOL* pFullscreen, IDXGIOutput** ppTarget) override
	{
		return pImpl->GetFullscreenState(pFullscreen, ppTarget);
	}
	virtual HRESULT __stdcall GetDesc(DXGI_SWAP_CHAIN_DESC* pDesc) override
	{
		return pImpl->GetDesc(pDesc);
	}
	virtual HRESULT __stdcall ResizeBuffers(UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) override
	{
		return pImpl->ResizeBuffers(BufferCount, Width, Height, NewFormat, SwapChainFlags);
	}
	virtual HRESULT __stdcall ResizeTarget(const DXGI_MODE_DESC* pNewTargetParameters) override
	{
		return pImpl->ResizeTarget(pNewTargetParameters);
	}
	virtual HRESULT __stdcall GetContainingOutput(IDXGIOutput** ppOutput) override
	{
		return pImpl->GetContainingOutput(ppOutput);
	}
	virtual HRESULT __stdcall GetFrameStatistics(DXGI_FRAME_STATISTICS* pStats) override
	{
		return pImpl->GetFrameStatistics(pStats);
	}
	virtual HRESULT __stdcall GetLastPresentCount(UINT* pLastPresentCount) override
	{
		return pImpl->GetLastPresentCount(pLastPresentCount);
	}


	virtual HRESULT __stdcall GetDesc1(DXGI_SWAP_CHAIN_DESC1* pDesc) override
	{
		return pImpl1->GetDesc1(pDesc);
	}
	virtual HRESULT __stdcall GetFullscreenDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pDesc) override
	{
		return pImpl1->GetFullscreenDesc(pDesc);
	}
	virtual HRESULT __stdcall GetHwnd(HWND* pHwnd) override
	{
		return pImpl1->GetHwnd(pHwnd);
	}
	virtual HRESULT __stdcall GetCoreWindow(REFIID refiid, void** ppUnk) override
	{
		return pImpl1->GetCoreWindow(refiid, ppUnk);
	}
	virtual HRESULT __stdcall Present1(UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS* pPresentParameters) override
	{
		return pImpl1->Present1(SyncInterval, PresentFlags, pPresentParameters);
	}
	virtual BOOL __stdcall IsTemporaryMonoSupported(void) override
	{
		return pImpl1->IsTemporaryMonoSupported();
	}
	virtual HRESULT __stdcall GetRestrictToOutput(IDXGIOutput** ppRestrictToOutput) override
	{
		return pImpl1->GetRestrictToOutput(ppRestrictToOutput);
	}
	virtual HRESULT __stdcall SetBackgroundColor(const DXGI_RGBA* pColor) override
	{
		return pImpl1->SetBackgroundColor(pColor);
	}
	virtual HRESULT __stdcall GetBackgroundColor(DXGI_RGBA* pColor) override
	{
		return pImpl1->GetBackgroundColor(pColor);
	}
	virtual HRESULT __stdcall SetRotation(DXGI_MODE_ROTATION Rotation) override
	{
		return pImpl1->SetRotation(Rotation);
	}
	virtual HRESULT __stdcall GetRotation(DXGI_MODE_ROTATION* pRotation) override
	{
		return pImpl1->GetRotation(pRotation);
	}


	virtual HRESULT __stdcall SetSourceSize(UINT Width, UINT Height) override
	{
		return pImpl2->SetSourceSize(Width, Height);
	}
	virtual HRESULT __stdcall GetSourceSize(UINT* pWidth, UINT* pHeight) override
	{
		return pImpl2->GetSourceSize(pWidth, pHeight);
	}
	virtual HRESULT __stdcall SetMaximumFrameLatency(UINT MaxLatency) override
	{
		return pImpl2->SetMaximumFrameLatency(MaxLatency);
	}
	virtual HRESULT __stdcall GetMaximumFrameLatency(UINT* pMaxLatency) override
	{
		return pImpl2->GetMaximumFrameLatency(pMaxLatency);
	}
	virtual HANDLE __stdcall GetFrameLatencyWaitableObject(void) override
	{
		return pImpl2->GetFrameLatencyWaitableObject();
	}
	virtual HRESULT __stdcall SetMatrixTransform(const DXGI_MATRIX_3X2_F* pMatrix) override
	{
		return pImpl2->SetMatrixTransform(pMatrix);
	}
	virtual HRESULT __stdcall GetMatrixTransform(DXGI_MATRIX_3X2_F* pMatrix) override
	{
		return pImpl2->GetMatrixTransform(pMatrix);
	}


	virtual UINT __stdcall GetCurrentBackBufferIndex(void) override
	{
		return pImpl3->GetCurrentBackBufferIndex();
	}
	virtual HRESULT __stdcall CheckColorSpaceSupport(DXGI_COLOR_SPACE_TYPE ColorSpace, UINT* pColorSpaceSupport) override
	{
		return pImpl3->CheckColorSpaceSupport(ColorSpace, pColorSpaceSupport);
	}
	virtual HRESULT __stdcall SetColorSpace1(DXGI_COLOR_SPACE_TYPE ColorSpace) override
	{
		return pImpl3->SetColorSpace1(ColorSpace);
	}
	virtual HRESULT __stdcall ResizeBuffers1(UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT* pCreationNodeMask, IUnknown* const* ppPresentQueue) override
	{
		return pImpl3->ResizeBuffers1(BufferCount, Width, Height, Format, SwapChainFlags, pCreationNodeMask, ppPresentQueue);
	}


	virtual HRESULT __stdcall SetHDRMetaData(DXGI_HDR_METADATA_TYPE Type, UINT Size, void* pMetaData) override
	{
		return pImpl4->SetHDRMetaData(Type, Size, pMetaData);
	}
};

struct IDXGIFactoryWrapper : public IDXGIFactory2
{
	IDXGIFactory* pImpl;
	IDXGIFactory1* pImpl1;
	IDXGIFactory2* pImpl2;

	IDXGIFactoryWrapper(IDXGIFactory* pImpl_) : pImpl(pImpl_), pImpl1(nullptr), pImpl2(nullptr)
	{
		HRESULT hr;
		hr = pImpl->QueryInterface(&pImpl1);
		if (FAILED(hr)) return;
		pImpl1->Release();

		hr = pImpl->QueryInterface(&pImpl2);
		if (FAILED(hr)) return;
		pImpl2->Release();
	}


	virtual HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override
	{
		if (
			riid == __uuidof(IDXGIFactory) ||
			(riid == __uuidof(IDXGIFactory1) && pImpl1 != nullptr) ||
			(riid == __uuidof(IDXGIFactory2) && pImpl2 != nullptr)
			)
		{
			AddRef();
			*ppvObject = this;
			return S_OK;
		}

		return pImpl->QueryInterface(riid, ppvObject);
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return pImpl->AddRef();
	}
	virtual ULONG __stdcall Release(void) override
	{
		return pImpl->Release();
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID Name, UINT DataSize, const void* pData) override
	{
		return pImpl->SetPrivateData(Name, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID Name, const IUnknown* pUnknown) override
	{
		return pImpl->SetPrivateDataInterface(Name, pUnknown);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID Name, UINT* pDataSize, void* pData) override
	{
		return pImpl->GetPrivateData(Name, pDataSize, pData);
	}
	virtual HRESULT __stdcall GetParent(REFIID riid, void** ppParent) override
	{
		return pImpl->GetParent(riid, ppParent);
	}
	virtual HRESULT __stdcall EnumAdapters(UINT Adapter, IDXGIAdapter** ppAdapter) override
	{
		return pImpl->EnumAdapters(Adapter, ppAdapter);
	}
	virtual HRESULT __stdcall MakeWindowAssociation(HWND WindowHandle, UINT Flags) override
	{
		return pImpl->MakeWindowAssociation(WindowHandle, Flags);
	}
	virtual HRESULT __stdcall GetWindowAssociation(HWND* pWindowHandle) override
	{
		return pImpl->GetWindowAssociation(pWindowHandle);
	}
	virtual HRESULT __stdcall CreateSwapChain(IUnknown* pDevice, DXGI_SWAP_CHAIN_DESC* pDesc, IDXGISwapChain** ppSwapChain) override
	{
		return pImpl->CreateSwapChain(pDevice, pDesc, ppSwapChain);
	}
	virtual HRESULT __stdcall CreateSoftwareAdapter(HMODULE Module, IDXGIAdapter** ppAdapter) override
	{
		return pImpl->CreateSoftwareAdapter(Module, ppAdapter);
	}


	virtual HRESULT __stdcall EnumAdapters1(UINT Adapter, IDXGIAdapter1** ppAdapter) override
	{
		return pImpl1->EnumAdapters1(Adapter, ppAdapter);
	}
	virtual BOOL __stdcall IsCurrent(void) override
	{
		return pImpl1->IsCurrent();
	}


	virtual BOOL __stdcall IsWindowedStereoEnabled(void) override
	{
		return pImpl2->IsWindowedStereoEnabled();
	}
	virtual HRESULT __stdcall CreateSwapChainForHwnd(IUnknown* pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1* pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain) override
	{
		return pImpl2->CreateSwapChainForHwnd(pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
	}
	virtual HRESULT __stdcall CreateSwapChainForCoreWindow(IUnknown* pDevice, IUnknown* pWindow, const DXGI_SWAP_CHAIN_DESC1* pDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain) override
	{
		return pImpl2->CreateSwapChainForCoreWindow(pDevice, pWindow, pDesc, pRestrictToOutput, ppSwapChain);
	}
	virtual HRESULT __stdcall GetSharedResourceAdapterLuid(HANDLE hResource, LUID* pLuid) override
	{
		return pImpl2->GetSharedResourceAdapterLuid(hResource, pLuid);
	}
	virtual HRESULT __stdcall RegisterStereoStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie) override
	{
		return pImpl2->RegisterStereoStatusWindow(WindowHandle, wMsg, pdwCookie);
	}
	virtual HRESULT __stdcall RegisterStereoStatusEvent(HANDLE hEvent, DWORD* pdwCookie) override
	{
		return pImpl2->RegisterStereoStatusEvent(hEvent, pdwCookie);
	}
	virtual void __stdcall UnregisterStereoStatus(DWORD dwCookie) override
	{
		return pImpl2->UnregisterStereoStatus(dwCookie);
	}
	virtual HRESULT __stdcall RegisterOcclusionStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie) override
	{
		return pImpl2->RegisterOcclusionStatusWindow(WindowHandle, wMsg, pdwCookie);
	}
	virtual HRESULT __stdcall RegisterOcclusionStatusEvent(HANDLE hEvent, DWORD* pdwCookie) override
	{
		return pImpl2->RegisterOcclusionStatusEvent(hEvent, pdwCookie);
	}
	virtual void __stdcall UnregisterOcclusionStatus(DWORD dwCookie) override
	{
		return pImpl2->UnregisterOcclusionStatus(dwCookie);
	}
	virtual HRESULT __stdcall CreateSwapChainForComposition(IUnknown* pDevice, const DXGI_SWAP_CHAIN_DESC1* pDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain) override
	{
		return pImpl2->CreateSwapChainForComposition(pDevice, pDesc, pRestrictToOutput, ppSwapChain);
	}
};

struct IDXGIDeviceWrapper : public IDXGIDevice4
{
	IDXGIDevice* pImpl;
	IDXGIDevice1* pImpl1;
	IDXGIDevice2* pImpl2;
	IDXGIDevice3* pImpl3;
	IDXGIDevice4* pImpl4;
	IDXGIDeviceWrapper(IDXGIDevice* pImpl) : pImpl(pImpl), pImpl1(nullptr), pImpl2(nullptr), pImpl3(nullptr), pImpl4(nullptr)
	{
		HRESULT hr;
		hr = pImpl->QueryInterface(&pImpl1);
		if (FAILED(hr)) return;
		pImpl1->Release();

		hr = pImpl->QueryInterface(&pImpl2);
		if (FAILED(hr)) return;
		pImpl2->Release();

		hr = pImpl->QueryInterface(&pImpl3);
		if (FAILED(hr)) return;
		pImpl3->Release();

		hr = pImpl->QueryInterface(&pImpl4);
		if (FAILED(hr)) return;
		pImpl4->Release();
	}

	virtual HRESULT __stdcall QueryInterface(REFIID riid, void ** ppvObject) override
	{
		if (
			riid == __uuidof(IDXGIDevice) ||
			(riid == __uuidof(IDXGIDevice1) && pImpl1 != nullptr) ||
			(riid == __uuidof(IDXGIDevice2) && pImpl2 != nullptr) ||
			(riid == __uuidof(IDXGIDevice3) && pImpl3 != nullptr) ||
			(riid == __uuidof(IDXGIDevice4) && pImpl4 != nullptr)
			)
		{
			AddRef();
			*ppvObject = this;
			return S_OK;
		}

		return pImpl->QueryInterface(riid, ppvObject);
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return pImpl->AddRef();
	}
	virtual ULONG __stdcall Release(void) override
	{
		return pImpl->Release();
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID Name, UINT DataSize, const void * pData) override
	{
		return pImpl->SetPrivateData(Name, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID Name, const IUnknown * pUnknown) override
	{
		return pImpl->SetPrivateDataInterface(Name, pUnknown);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID Name, UINT * pDataSize, void * pData) override
	{
		return pImpl->GetPrivateData(Name, pDataSize, pData);
	}
	virtual HRESULT __stdcall GetParent(REFIID riid, void ** ppParent) override
	{
		return pImpl->GetParent(riid, ppParent);
	}
	virtual HRESULT __stdcall GetAdapter(IDXGIAdapter ** pAdapter) override
	{
		return pImpl->GetAdapter(pAdapter);
	}
	virtual HRESULT __stdcall CreateSurface(const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface) override
	{
		return pImpl->CreateSurface(pDesc, NumSurfaces, Usage, pSharedResource, ppSurface);
	}
	virtual HRESULT __stdcall QueryResourceResidency(IUnknown * const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources) override
	{
		return pImpl->QueryResourceResidency(ppResources, pResidencyStatus, NumResources);
	}
	virtual HRESULT __stdcall SetGPUThreadPriority(INT Priority) override
	{
		return pImpl->SetGPUThreadPriority(Priority);
	}
	virtual HRESULT __stdcall GetGPUThreadPriority(INT * pPriority) override
	{
		return pImpl->GetGPUThreadPriority(pPriority);
	}


	virtual HRESULT __stdcall SetMaximumFrameLatency(UINT MaxLatency) override
	{
		return pImpl1->SetMaximumFrameLatency(MaxLatency);
	}
	virtual HRESULT __stdcall GetMaximumFrameLatency(UINT * pMaxLatency) override
	{
		return pImpl1->GetMaximumFrameLatency(pMaxLatency);
	}


	virtual HRESULT __stdcall OfferResources(UINT NumResources, IDXGIResource * const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority) override
	{
		return pImpl2->OfferResources(NumResources, ppResources, Priority);
	}
	virtual HRESULT __stdcall ReclaimResources(UINT NumResources, IDXGIResource * const * ppResources, BOOL * pDiscarded) override
	{
		return pImpl2->ReclaimResources(NumResources, ppResources, pDiscarded);
	}
	virtual HRESULT __stdcall EnqueueSetEvent(HANDLE hEvent) override
	{
		return pImpl2->EnqueueSetEvent(hEvent);
	}


	virtual void __stdcall Trim(void) override
	{
		return pImpl3->Trim();
	}


	virtual HRESULT __stdcall OfferResources1(UINT NumResources, IDXGIResource * const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, UINT Flags) override
	{
		return pImpl4->OfferResources1(NumResources, ppResources, Priority, Flags);
	}
	virtual HRESULT __stdcall ReclaimResources1(UINT NumResources, IDXGIResource * const * ppResources, DXGI_RECLAIM_RESOURCE_RESULTS * pResults) override
	{
		return pImpl4->ReclaimResources1(NumResources, ppResources, pResults);
	}
};

struct IDXGIAdapterWrapper : public IDXGIAdapter
{
	IDXGIAdapter* pImpl;

	IDXGIAdapterWrapper(IDXGIAdapter* pImpl) : pImpl(pImpl)
	{}

	virtual HRESULT __stdcall QueryInterface(REFIID riid, void ** ppvObject) override
	{
		return pImpl->QueryInterface(riid, ppvObject);
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return pImpl->AddRef();
	}
	virtual ULONG __stdcall Release(void) override
	{
		return pImpl->Release();
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID Name, UINT DataSize, const void * pData) override
	{
		return pImpl->SetPrivateData(Name, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID Name, const IUnknown * pUnknown) override
	{
		return pImpl->SetPrivateDataInterface(Name, pUnknown);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID Name, UINT * pDataSize, void * pData) override
	{
		return pImpl->GetPrivateData(Name, pDataSize, pData);
	}
	virtual HRESULT __stdcall GetParent(REFIID riid, void ** ppParent) override
	{
		return pImpl->GetParent(riid, ppParent);
	}
	virtual HRESULT __stdcall EnumOutputs(UINT Output, IDXGIOutput ** ppOutput) override
	{
		return pImpl->EnumOutputs(Output, ppOutput);
	}
	virtual HRESULT __stdcall GetDesc(DXGI_ADAPTER_DESC * pDesc) override
	{
		return pImpl->GetDesc(pDesc);
	}
	virtual HRESULT __stdcall CheckInterfaceSupport(REFGUID InterfaceName, LARGE_INTEGER * pUMDVersion) override
	{
		return pImpl->CheckInterfaceSupport(InterfaceName, pUMDVersion);
	}
};
