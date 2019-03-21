#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexComponentBase()
{
    class_< UApexComponentBase, bases< UMeshComponent >  , boost::noncopyable>("UApexComponentBase", no_init)
        .def_readwrite("ComponentBaseResources", &UApexComponentBase::ComponentBaseResources)
        .def_readwrite("ReleaseResourcesFence", &UApexComponentBase::ReleaseResourcesFence)
        .def_readwrite("Asset", &UApexComponentBase::Asset)
        .def_readwrite("WireframeColor", &UApexComponentBase::WireframeColor)
        .def("StaticClass", &UApexComponentBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}