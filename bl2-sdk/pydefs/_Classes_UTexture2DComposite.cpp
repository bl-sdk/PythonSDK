#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTexture2DComposite()
{
    class_< UTexture2DComposite, bases< UTexture >  , boost::noncopyable>("UTexture2DComposite", no_init)
        .def_readwrite("SourceRegions", &UTexture2DComposite::SourceRegions)
        .def_readwrite("MaxTextureSize", &UTexture2DComposite::MaxTextureSize)
        .def("StaticClass", &UTexture2DComposite::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetSourceRegions", &UTexture2DComposite::ResetSourceRegions)
        .def("UpdateCompositeTexture", &UTexture2DComposite::UpdateCompositeTexture)
        .def("SourceTexturesFullyStreamedIn", &UTexture2DComposite::SourceTexturesFullyStreamedIn)
        .staticmethod("StaticClass")
  ;
}