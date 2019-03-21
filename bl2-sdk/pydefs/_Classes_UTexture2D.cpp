#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTexture2D()
{
    class_< UTexture2D, bases< UTexture >  , boost::noncopyable>("UTexture2D", no_init)
        .def_readwrite("Mips", &UTexture2D::Mips)
        .def_readwrite("SizeX", &UTexture2D::SizeX)
        .def_readwrite("SizeY", &UTexture2D::SizeY)
        .def_readwrite("OriginalSizeX", &UTexture2D::OriginalSizeX)
        .def_readwrite("OriginalSizeY", &UTexture2D::OriginalSizeY)
        .def_readwrite("Format", &UTexture2D::Format)
        .def_readwrite("AddressX", &UTexture2D::AddressX)
        .def_readwrite("AddressY", &UTexture2D::AddressY)
        .def_readwrite("ForceMipLevelsToBeResidentTimestamp", &UTexture2D::ForceMipLevelsToBeResidentTimestamp)
        .def_readwrite("TextureFileCacheName", &UTexture2D::TextureFileCacheName)
        .def_readwrite("RequestedMips", &UTexture2D::RequestedMips)
        .def_readwrite("ResidentMips", &UTexture2D::ResidentMips)
        .def_readwrite("PendingMipChangeRequestStatus", &UTexture2D::PendingMipChangeRequestStatus)
        .def_readwrite("SystemMemoryData", &UTexture2D::SystemMemoryData)
        .def_readwrite("StreamableTexturesLink", &UTexture2D::StreamableTexturesLink)
        .def_readwrite("StreamingIndex", &UTexture2D::StreamingIndex)
        .def_readwrite("MipTailBaseIdx", &UTexture2D::MipTailBaseIdx)
        .def_readwrite("ResourceMem", &UTexture2D::ResourceMem)
        .def_readwrite("FirstResourceMemMip", &UTexture2D::FirstResourceMemMip)
        .def_readwrite("Timer", &UTexture2D::Timer)
        .def("StaticClass", &UTexture2D::StaticClass, return_value_policy< reference_existing_object >())
        .def("Create", &UTexture2D::Create, return_value_policy< reference_existing_object >())
        .def("SetForceMipLevelsToBeResident", &UTexture2D::SetForceMipLevelsToBeResident)
        .staticmethod("StaticClass")
  ;
}