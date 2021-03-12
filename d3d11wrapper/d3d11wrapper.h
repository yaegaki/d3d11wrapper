#pragma once

#include <d3d11.h>

struct ID3D11DeviceWrapper : public ID3D11Device
{
	ID3D11Device* pImpl;

	ID3D11DeviceWrapper(ID3D11Device* pImpl) : pImpl(pImpl)
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
	virtual HRESULT __stdcall CreateBuffer(const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer) override
	{
		return pImpl->CreateBuffer(pDesc, pInitialData, ppBuffer);
	}
	virtual HRESULT __stdcall CreateTexture1D(const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D) override
	{
		return pImpl->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
	}
	virtual HRESULT __stdcall CreateTexture2D(const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D) override
	{
		return pImpl->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
	}
	virtual HRESULT __stdcall CreateTexture3D(const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D) override
	{
		return pImpl->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
	}
	virtual HRESULT __stdcall CreateShaderResourceView(ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView) override
	{
		return pImpl->CreateShaderResourceView(pResource, pDesc, ppSRView);
	}
	virtual HRESULT __stdcall CreateUnorderedAccessView(ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView) override
	{
		return pImpl->CreateUnorderedAccessView(pResource, pDesc, ppUAView);
	}
	virtual HRESULT __stdcall CreateRenderTargetView(ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView) override
	{
		return pImpl->CreateRenderTargetView(pResource, pDesc, ppRTView);
	}
	virtual HRESULT __stdcall CreateDepthStencilView(ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView) override
	{
		return pImpl->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
	}
	virtual HRESULT __stdcall CreateInputLayout(const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout) override
	{
		return pImpl->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
	}
	virtual HRESULT __stdcall CreateVertexShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader) override
	{
		return pImpl->CreateVertexShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader);
	}
	virtual HRESULT __stdcall CreateGeometryShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader) override
	{
		return pImpl->CreateGeometryShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppGeometryShader);
	}
	virtual HRESULT __stdcall CreateGeometryShaderWithStreamOutput(const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader) override
	{
		return pImpl->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, pBufferStrides, NumStrides, RasterizedStream, pClassLinkage, ppGeometryShader);
	}
	virtual HRESULT __stdcall CreatePixelShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader) override
	{
		return pImpl->CreatePixelShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppPixelShader);
	}
	virtual HRESULT __stdcall CreateHullShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader) override
	{
		return pImpl->CreateHullShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppHullShader);
	}
	virtual HRESULT __stdcall CreateDomainShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader) override
	{
		return pImpl->CreateDomainShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppDomainShader);
	}
	virtual HRESULT __stdcall CreateComputeShader(const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader) override
	{
		return pImpl->CreateComputeShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppComputeShader);
	}
	virtual HRESULT __stdcall CreateClassLinkage(ID3D11ClassLinkage ** ppLinkage) override
	{
		return pImpl->CreateClassLinkage(ppLinkage);
	}
	virtual HRESULT __stdcall CreateBlendState(const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState) override
	{
		return pImpl->CreateBlendState(pBlendStateDesc, ppBlendState);
	}
	virtual HRESULT __stdcall CreateDepthStencilState(const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState) override
	{
		return pImpl->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
	}
	virtual HRESULT __stdcall CreateRasterizerState(const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState) override
	{
		return pImpl->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
	}
	virtual HRESULT __stdcall CreateSamplerState(const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState) override
	{
		return pImpl->CreateSamplerState(pSamplerDesc, ppSamplerState);
	}
	virtual HRESULT __stdcall CreateQuery(const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery) override
	{
		return pImpl->CreateQuery(pQueryDesc, ppQuery);
	}
	virtual HRESULT __stdcall CreatePredicate(const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate) override
	{
		return pImpl->CreatePredicate(pPredicateDesc, ppPredicate);
	}
	virtual HRESULT __stdcall CreateCounter(const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter) override
	{
		return pImpl->CreateCounter(pCounterDesc, ppCounter);
	}
	virtual HRESULT __stdcall CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext) override
	{
		return pImpl->CreateDeferredContext(ContextFlags, ppDeferredContext);
	}
	virtual HRESULT __stdcall OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void ** ppResource) override
	{
		return pImpl->OpenSharedResource(hResource, ReturnedInterface, ppResource);
	}
	virtual HRESULT __stdcall CheckFormatSupport(DXGI_FORMAT Format, UINT * pFormatSupport) override
	{
		return pImpl->CheckFormatSupport(Format, pFormatSupport);
	}
	virtual HRESULT __stdcall CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels) override
	{
		return pImpl->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
	}
	virtual void __stdcall CheckCounterInfo(D3D11_COUNTER_INFO * pCounterInfo) override
	{
		return pImpl->CheckCounterInfo(pCounterInfo);
	}
	virtual HRESULT __stdcall CheckCounter(const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength) override
	{
		return pImpl->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
	}
	virtual HRESULT __stdcall CheckFeatureSupport(D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize) override
	{
		return pImpl->CheckFeatureSupport(Feature, pFeatureSupportData, FeatureSupportDataSize);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID guid, UINT * pDataSize, void * pData) override
	{
		return pImpl->GetPrivateData(guid, pDataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID guid, UINT DataSize, const void * pData) override
	{
		return pImpl->SetPrivateData(guid, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID guid, const IUnknown * pData) override
	{
		return pImpl->SetPrivateDataInterface(guid, pData);
	}
	virtual D3D_FEATURE_LEVEL __stdcall GetFeatureLevel(void) override
	{
		return pImpl->GetFeatureLevel();
	}
	virtual UINT __stdcall GetCreationFlags(void) override
	{
		return pImpl->GetCreationFlags();
	}
	virtual HRESULT __stdcall GetDeviceRemovedReason(void) override
	{
		return pImpl->GetDeviceRemovedReason();
	}
	virtual void __stdcall GetImmediateContext(ID3D11DeviceContext ** ppImmediateContext) override
	{
		return pImpl->GetImmediateContext(ppImmediateContext);
	}
	virtual HRESULT __stdcall SetExceptionMode(UINT RaiseFlags) override
	{
		return pImpl->SetExceptionMode(RaiseFlags);
	}
	virtual UINT __stdcall GetExceptionMode(void) override
	{
		return pImpl->GetExceptionMode();
	}
};

struct ID3D11DeviceContextWrapper : public ID3D11DeviceContext
{
	ID3D11DeviceContext* pImpl;

	ID3D11DeviceContextWrapper(ID3D11DeviceContext* pImpl) : pImpl(pImpl)
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
	virtual void __stdcall GetDevice(ID3D11Device ** ppDevice) override
	{
		pImpl->GetDevice(ppDevice);
	}
	virtual HRESULT __stdcall GetPrivateData(REFGUID guid, UINT * pDataSize, void * pData) override
	{
		return pImpl->GetPrivateData(guid, pDataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateData(REFGUID guid, UINT DataSize, const void * pData) override
	{
		return pImpl->SetPrivateData(guid, DataSize, pData);
	}
	virtual HRESULT __stdcall SetPrivateDataInterface(REFGUID guid, const IUnknown * pData) override
	{
		return pImpl->SetPrivateDataInterface(guid, pData);
	}
	virtual void __stdcall VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall PSSetShader(ID3D11PixelShader * pPixelShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall VSSetShader(ID3D11VertexShader * pVertexShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation) override
	{
		pImpl->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
	}
	virtual void __stdcall Draw(UINT VertexCount, UINT StartVertexLocation) override
	{
		pImpl->Draw(VertexCount, StartVertexLocation);
	}
	virtual HRESULT __stdcall Map(ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource) override
	{
		return pImpl->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
	}
	virtual void __stdcall Unmap(ID3D11Resource * pResource, UINT Subresource) override
	{
		pImpl->Unmap(pResource, Subresource);
	}
	virtual void __stdcall PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall IASetInputLayout(ID3D11InputLayout * pInputLayout) override
	{
		pImpl->IASetInputLayout(pInputLayout);
	}
	virtual void __stdcall IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets) override
	{
		pImpl->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
	}
	virtual void __stdcall IASetIndexBuffer(ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset) override
	{
		pImpl->IASetIndexBuffer(pIndexBuffer, Format, Offset);
	}
	virtual void __stdcall DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation) override
	{
		pImpl->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
	}
	virtual void __stdcall DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation) override
	{
		pImpl->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
	}
	virtual void __stdcall GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall GSSetShader(ID3D11GeometryShader * pShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->GSSetShader(pShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology) override
	{
		pImpl->IASetPrimitiveTopology(Topology);
	}
	virtual void __stdcall VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall Begin(ID3D11Asynchronous * pAsync) override
	{
		pImpl->Begin(pAsync);
	}
	virtual void __stdcall End(ID3D11Asynchronous * pAsync) override
	{
		pImpl->End(pAsync);
	}
	virtual HRESULT __stdcall GetData(ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags) override
	{
		return pImpl->GetData(pAsync, pData, DataSize, GetDataFlags);
	}
	virtual void __stdcall SetPredication(ID3D11Predicate * pPredicate, BOOL PredicateValue) override
	{
		pImpl->SetPredication(pPredicate, PredicateValue);
	}
	virtual void __stdcall GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall OMSetRenderTargets(UINT NumViews, ID3D11RenderTargetView * const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView) override
	{
		pImpl->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
	}
	virtual void __stdcall OMSetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView * const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView * const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts) override
	{
		pImpl->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
	}
	virtual void __stdcall OMSetBlendState(ID3D11BlendState * pBlendState, const FLOAT BlendFactor[4], UINT SampleMask) override
	{
		pImpl->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
	}
	virtual void __stdcall OMSetDepthStencilState(ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef) override
	{
		pImpl->OMSetDepthStencilState(pDepthStencilState, StencilRef);
	}
	virtual void __stdcall SOSetTargets(UINT NumBuffers, ID3D11Buffer * const * ppSOTargets, const UINT * pOffsets) override
	{
		pImpl->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
	}
	virtual void __stdcall DrawAuto(void) override
	{
		pImpl->DrawAuto();
	}
	virtual void __stdcall DrawIndexedInstancedIndirect(ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs) override
	{
		pImpl->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
	}
	virtual void __stdcall DrawInstancedIndirect(ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs) override
	{
		pImpl->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
	}
	virtual void __stdcall Dispatch(UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ) override
	{
		pImpl->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
	}
	virtual void __stdcall DispatchIndirect(ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs) override
	{
		pImpl->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
	}
	virtual void __stdcall RSSetState(ID3D11RasterizerState * pRasterizerState) override
	{
		pImpl->RSSetState(pRasterizerState);
	}
	virtual void __stdcall RSSetViewports(UINT NumViewports, const D3D11_VIEWPORT * pViewports) override
	{
		pImpl->RSSetViewports(NumViewports, pViewports);
	}
	virtual void __stdcall RSSetScissorRects(UINT NumRects, const D3D11_RECT * pRects) override
	{
		pImpl->RSSetScissorRects(NumRects, pRects);
	}
	virtual void __stdcall CopySubresourceRegion(ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox) override
	{
		pImpl->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
	}
	virtual void __stdcall CopyResource(ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource) override
	{
		pImpl->CopyResource(pDstResource, pSrcResource);
	}
	virtual void __stdcall UpdateSubresource(ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch) override
	{
		pImpl->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
	}
	virtual void __stdcall CopyStructureCount(ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView) override
	{
		pImpl->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
	}
	virtual void __stdcall ClearRenderTargetView(ID3D11RenderTargetView * pRenderTargetView, const FLOAT ColorRGBA[4]) override
	{
		pImpl->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
	}
	virtual void __stdcall ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT Values[4]) override
	{
		pImpl->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
	}
	virtual void __stdcall ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT Values[4]) override
	{
		pImpl->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
	}
	virtual void __stdcall ClearDepthStencilView(ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil) override
	{
		pImpl->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
	}
	virtual void __stdcall GenerateMips(ID3D11ShaderResourceView * pShaderResourceView) override
	{
		pImpl->GenerateMips(pShaderResourceView);
	}
	virtual void __stdcall SetResourceMinLOD(ID3D11Resource * pResource, FLOAT MinLOD) override
	{
		pImpl->SetResourceMinLOD(pResource, MinLOD);
	}
	virtual FLOAT __stdcall GetResourceMinLOD(ID3D11Resource * pResource) override
	{
		return pImpl->GetResourceMinLOD(pResource);
	}
	virtual void __stdcall ResolveSubresource(ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format) override
	{
		pImpl->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
	}
	virtual void __stdcall ExecuteCommandList(ID3D11CommandList * pCommandList, BOOL RestoreContextState) override
	{
		pImpl->ExecuteCommandList(pCommandList, RestoreContextState);
	}
	virtual void __stdcall HSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall HSSetShader(ID3D11HullShader * pHullShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall HSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall HSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall DSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall DSSetShader(ID3D11DomainShader * pDomainShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall DSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall DSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall CSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const * ppShaderResourceViews) override
	{
		pImpl->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall CSSetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView * const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts) override
	{
		pImpl->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
	}
	virtual void __stdcall CSSetShader(ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance * const * ppClassInstances, UINT NumClassInstances) override
	{
		pImpl->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
	}
	virtual void __stdcall CSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const * ppSamplers) override
	{
		pImpl->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall CSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const * ppConstantBuffers) override
	{
		pImpl->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall PSGetShader(ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall VSGetShader(ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall IAGetInputLayout(ID3D11InputLayout ** ppInputLayout) override
	{
		pImpl->IAGetInputLayout(ppInputLayout);
	}
	virtual void __stdcall IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets) override
	{
		pImpl->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
	}
	virtual void __stdcall IAGetIndexBuffer(ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset) override
	{
		pImpl->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
	}
	virtual void __stdcall GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall GSGetShader(ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall IAGetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY * pTopology) override
	{
		pImpl->IAGetPrimitiveTopology(pTopology);
	}
	virtual void __stdcall VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall GetPredication(ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue) override
	{
		pImpl->GetPredication(ppPredicate, pPredicateValue);
	}
	virtual void __stdcall GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall OMGetRenderTargets(UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView) override
	{
		pImpl->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
	}
	virtual void __stdcall OMGetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews) override
	{
		pImpl->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
	}
	virtual void __stdcall OMGetBlendState(ID3D11BlendState ** ppBlendState, FLOAT BlendFactor[4], UINT * pSampleMask) override
	{
		pImpl->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
	}
	virtual void __stdcall OMGetDepthStencilState(ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef) override
	{
		pImpl->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
	}
	virtual void __stdcall SOGetTargets(UINT NumBuffers, ID3D11Buffer ** ppSOTargets) override
	{
		pImpl->SOGetTargets(NumBuffers, ppSOTargets);
	}
	virtual void __stdcall RSGetState(ID3D11RasterizerState ** ppRasterizerState) override
	{
		pImpl->RSGetState(ppRasterizerState);
	}
	virtual void __stdcall RSGetViewports(UINT * pNumViewports, D3D11_VIEWPORT * pViewports) override
	{
		pImpl->RSGetViewports(pNumViewports, pViewports);
	}
	virtual void __stdcall RSGetScissorRects(UINT * pNumRects, D3D11_RECT * pRects) override
	{
		pImpl->RSGetScissorRects(pNumRects, pRects);
	}
	virtual void __stdcall HSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall HSGetShader(ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall HSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall HSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall DSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall DSGetShader(ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall DSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall DSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall CSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews) override
	{
		pImpl->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
	}
	virtual void __stdcall CSGetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews) override
	{
		pImpl->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
	}
	virtual void __stdcall CSGetShader(ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances) override
	{
		pImpl->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
	}
	virtual void __stdcall CSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers) override
	{
		pImpl->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
	}
	virtual void __stdcall CSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers) override
	{
		pImpl->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
	}
	virtual void __stdcall ClearState(void) override
	{
		pImpl->ClearState();
	}
	virtual void __stdcall Flush(void) override
	{
		pImpl->Flush();
	}
	virtual D3D11_DEVICE_CONTEXT_TYPE __stdcall GetType(void) override
	{
		return pImpl->GetType();
	}
	virtual UINT __stdcall GetContextFlags(void) override
	{
		return pImpl->GetContextFlags();
	}
	virtual HRESULT __stdcall FinishCommandList(BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList) override
	{
		return pImpl->FinishCommandList(RestoreDeferredContextState, ppCommandList);
	}
};
