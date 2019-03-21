#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDeferredDataProviderGFxObject()
{
    class_< UDeferredDataProviderGFxObject, bases< UGFxObject >  , boost::noncopyable>("UDeferredDataProviderGFxObject", no_init)
        .def_readwrite("BaseOwningMovie", &UDeferredDataProviderGFxObject::BaseOwningMovie)
        .def_readwrite("CachedObjects", &UDeferredDataProviderGFxObject::CachedObjects)
        .def("StaticClass", &UDeferredDataProviderGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetLength", &UDeferredDataProviderGFxObject::GetLength)
        .def("eventInvalidate", &UDeferredDataProviderGFxObject::eventInvalidate)
        .def("EmptyData", &UDeferredDataProviderGFxObject::EmptyData)
        .def("RequestItemRange", &UDeferredDataProviderGFxObject::RequestItemRange, return_value_policy< reference_existing_object >())
        .def("RequestItemAt", &UDeferredDataProviderGFxObject::RequestItemAt, return_value_policy< reference_existing_object >())
        .def("Init", &UDeferredDataProviderGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}