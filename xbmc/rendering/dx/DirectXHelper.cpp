/*
 *  Copyright (C) 2023 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include <d3d11_4.h>
#include <dxgicommon.h>
#include <dxgiformat.h>

namespace DX
{
const std::string DXGIFormatToString(const DXGI_FORMAT format)
{
#define CASEDXGIFORMAT(format) \
  case DXGI_FORMAT_##format: \
    return #format;

  switch (format)
  {
    CASEDXGIFORMAT(UNKNOWN)
    CASEDXGIFORMAT(R32G32B32A32_TYPELESS)
    CASEDXGIFORMAT(R32G32B32A32_FLOAT)
    CASEDXGIFORMAT(R32G32B32A32_UINT)
    CASEDXGIFORMAT(R32G32B32A32_SINT)
    CASEDXGIFORMAT(R32G32B32_TYPELESS)
    CASEDXGIFORMAT(R32G32B32_FLOAT)
    CASEDXGIFORMAT(R32G32B32_UINT)
    CASEDXGIFORMAT(R32G32B32_SINT)
    CASEDXGIFORMAT(R16G16B16A16_TYPELESS)
    CASEDXGIFORMAT(R16G16B16A16_FLOAT)
    CASEDXGIFORMAT(R16G16B16A16_UNORM)
    CASEDXGIFORMAT(R16G16B16A16_UINT)
    CASEDXGIFORMAT(R16G16B16A16_SNORM)
    CASEDXGIFORMAT(R16G16B16A16_SINT)
    CASEDXGIFORMAT(R32G32_TYPELESS)
    CASEDXGIFORMAT(R32G32_FLOAT)
    CASEDXGIFORMAT(R32G32_UINT)
    CASEDXGIFORMAT(R32G32_SINT)
    CASEDXGIFORMAT(R32G8X24_TYPELESS)
    CASEDXGIFORMAT(D32_FLOAT_S8X24_UINT)
    CASEDXGIFORMAT(R32_FLOAT_X8X24_TYPELESS)
    CASEDXGIFORMAT(X32_TYPELESS_G8X24_UINT)
    CASEDXGIFORMAT(R10G10B10A2_TYPELESS)
    CASEDXGIFORMAT(R10G10B10A2_UNORM)
    CASEDXGIFORMAT(R10G10B10A2_UINT)
    CASEDXGIFORMAT(R11G11B10_FLOAT)
    CASEDXGIFORMAT(R8G8B8A8_TYPELESS)
    CASEDXGIFORMAT(R8G8B8A8_UNORM)
    CASEDXGIFORMAT(R8G8B8A8_UNORM_SRGB)
    CASEDXGIFORMAT(R8G8B8A8_UINT)
    CASEDXGIFORMAT(R8G8B8A8_SNORM)
    CASEDXGIFORMAT(R8G8B8A8_SINT)
    CASEDXGIFORMAT(R16G16_TYPELESS)
    CASEDXGIFORMAT(R16G16_FLOAT)
    CASEDXGIFORMAT(R16G16_UNORM)
    CASEDXGIFORMAT(R16G16_UINT)
    CASEDXGIFORMAT(R16G16_SNORM)
    CASEDXGIFORMAT(R16G16_SINT)
    CASEDXGIFORMAT(R32_TYPELESS)
    CASEDXGIFORMAT(D32_FLOAT)
    CASEDXGIFORMAT(R32_FLOAT)
    CASEDXGIFORMAT(R32_UINT)
    CASEDXGIFORMAT(R32_SINT)
    CASEDXGIFORMAT(R24G8_TYPELESS)
    CASEDXGIFORMAT(D24_UNORM_S8_UINT)
    CASEDXGIFORMAT(R24_UNORM_X8_TYPELESS)
    CASEDXGIFORMAT(X24_TYPELESS_G8_UINT)
    CASEDXGIFORMAT(R8G8_TYPELESS)
    CASEDXGIFORMAT(R8G8_UNORM)
    CASEDXGIFORMAT(R8G8_UINT)
    CASEDXGIFORMAT(R8G8_SNORM)
    CASEDXGIFORMAT(R8G8_SINT)
    CASEDXGIFORMAT(R16_TYPELESS)
    CASEDXGIFORMAT(R16_FLOAT)
    CASEDXGIFORMAT(D16_UNORM)
    CASEDXGIFORMAT(R16_UNORM)
    CASEDXGIFORMAT(R16_UINT)
    CASEDXGIFORMAT(R16_SNORM)
    CASEDXGIFORMAT(R16_SINT)
    CASEDXGIFORMAT(R8_TYPELESS)
    CASEDXGIFORMAT(R8_UNORM)
    CASEDXGIFORMAT(R8_UINT)
    CASEDXGIFORMAT(R8_SNORM)
    CASEDXGIFORMAT(R8_SINT)
    CASEDXGIFORMAT(A8_UNORM)
    CASEDXGIFORMAT(R1_UNORM)
    CASEDXGIFORMAT(R9G9B9E5_SHAREDEXP)
    CASEDXGIFORMAT(R8G8_B8G8_UNORM)
    CASEDXGIFORMAT(BC1_TYPELESS)
    CASEDXGIFORMAT(BC1_UNORM)
    CASEDXGIFORMAT(BC1_UNORM_SRGB)
    CASEDXGIFORMAT(BC2_TYPELESS)
    CASEDXGIFORMAT(BC2_UNORM)
    CASEDXGIFORMAT(BC2_UNORM_SRGB)
    CASEDXGIFORMAT(BC3_TYPELESS)
    CASEDXGIFORMAT(BC3_UNORM)
    CASEDXGIFORMAT(BC3_UNORM_SRGB)
    CASEDXGIFORMAT(BC4_TYPELESS)
    CASEDXGIFORMAT(BC4_UNORM)
    CASEDXGIFORMAT(BC4_SNORM)
    CASEDXGIFORMAT(BC5_TYPELESS)
    CASEDXGIFORMAT(BC5_UNORM)
    CASEDXGIFORMAT(BC5_SNORM)
    CASEDXGIFORMAT(B5G6R5_UNORM)
    CASEDXGIFORMAT(B5G5R5A1_UNORM)
    CASEDXGIFORMAT(B8G8R8A8_UNORM)
    CASEDXGIFORMAT(B8G8R8X8_UNORM)
    CASEDXGIFORMAT(R10G10B10_XR_BIAS_A2_UNORM)
    CASEDXGIFORMAT(B8G8R8A8_TYPELESS)
    CASEDXGIFORMAT(B8G8R8A8_UNORM_SRGB)
    CASEDXGIFORMAT(B8G8R8X8_TYPELESS)
    CASEDXGIFORMAT(B8G8R8X8_UNORM_SRGB)
    CASEDXGIFORMAT(BC6H_TYPELESS)
    CASEDXGIFORMAT(BC6H_UF16)
    CASEDXGIFORMAT(BC6H_SF16)
    CASEDXGIFORMAT(BC7_TYPELESS)
    CASEDXGIFORMAT(BC7_UNORM)
    CASEDXGIFORMAT(BC7_UNORM_SRGB)
    CASEDXGIFORMAT(AYUV)
    CASEDXGIFORMAT(Y410)
    CASEDXGIFORMAT(Y416)
    CASEDXGIFORMAT(NV12)
    CASEDXGIFORMAT(P010)
    CASEDXGIFORMAT(P016)
    CASEDXGIFORMAT(420_OPAQUE)
    CASEDXGIFORMAT(YUY2)
    CASEDXGIFORMAT(Y210)
    CASEDXGIFORMAT(Y216)
    CASEDXGIFORMAT(NV11)
    CASEDXGIFORMAT(AI44)
    CASEDXGIFORMAT(IA44)
    CASEDXGIFORMAT(P8)
    CASEDXGIFORMAT(A8P8)
    CASEDXGIFORMAT(B4G4R4A4_UNORM)
    CASEDXGIFORMAT(P208)
    CASEDXGIFORMAT(V208)
    CASEDXGIFORMAT(V408)
    default:
      return std::to_string(format);
  };
#undef CASEDXGIFORMAT
}

const std::string DXGIColorSpaceTypeToString(DXGI_COLOR_SPACE_TYPE type)
{
#define CASEDXGICOLORSPACETYPE(type) \
  case DXGI_COLOR_SPACE_##type: \
    return #type;

  switch (type)
  {
    CASEDXGICOLORSPACETYPE(RGB_FULL_G22_NONE_P709)
    CASEDXGICOLORSPACETYPE(RGB_FULL_G10_NONE_P709)
    CASEDXGICOLORSPACETYPE(RGB_STUDIO_G22_NONE_P709)
    CASEDXGICOLORSPACETYPE(RGB_STUDIO_G22_NONE_P2020)
    CASEDXGICOLORSPACETYPE(RESERVED)
    CASEDXGICOLORSPACETYPE(YCBCR_FULL_G22_NONE_P709_X601)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G22_LEFT_P601)
    CASEDXGICOLORSPACETYPE(YCBCR_FULL_G22_LEFT_P601)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G22_LEFT_P709)
    CASEDXGICOLORSPACETYPE(YCBCR_FULL_G22_LEFT_P709)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G22_LEFT_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_FULL_G22_LEFT_P2020)
    CASEDXGICOLORSPACETYPE(RGB_FULL_G2084_NONE_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G2084_LEFT_P2020)
    CASEDXGICOLORSPACETYPE(RGB_STUDIO_G2084_NONE_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G22_TOPLEFT_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G2084_TOPLEFT_P2020)
    CASEDXGICOLORSPACETYPE(RGB_FULL_G22_NONE_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_GHLG_TOPLEFT_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_FULL_GHLG_TOPLEFT_P2020)
    CASEDXGICOLORSPACETYPE(RGB_STUDIO_G24_NONE_P709)
    CASEDXGICOLORSPACETYPE(RGB_STUDIO_G24_NONE_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G24_LEFT_P709)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G24_LEFT_P2020)
    CASEDXGICOLORSPACETYPE(YCBCR_STUDIO_G24_TOPLEFT_P2020)
    default:
      return std::to_string(type);
  }
#undef CASEDXGICOLORSPACETYPE
}

const std::string D3D11VideoProcessorFormatSupportToString(
    D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT value)
{
  switch (value)
  {
    case D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_INPUT:
      return "input";
    case D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_OUTPUT:
      return "output";
    default:
      return std::to_string(value);
  }
}
} // namespace DX