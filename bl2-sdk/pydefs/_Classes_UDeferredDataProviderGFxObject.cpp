#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDeferredDataProviderGFxObject(py::module &m)
{
    py::class_< UDeferredDataProviderGFxObject,  UGFxObject   >(m, "UDeferredDataProviderGFxObject")
        .def_readwrite("BaseOwningMovie", &UDeferredDataProviderGFxObject::BaseOwningMovie)
        .def_readwrite("CachedObjects", &UDeferredDataProviderGFxObject::CachedObjects)
        .def("StaticClass", &UDeferredDataProviderGFxObject::StaticClass, py::return_value_policy::reference)
        .def("GetLength", &UDeferredDataProviderGFxObject::GetLength)
        .def("eventInvalidate", &UDeferredDataProviderGFxObject::eventInvalidate)
        .def("EmptyData", &UDeferredDataProviderGFxObject::EmptyData)
        .def("RequestItemRange", &UDeferredDataProviderGFxObject::RequestItemRange, py::return_value_policy::reference)
        .def("RequestItemAt", &UDeferredDataProviderGFxObject::RequestItemAt, py::return_value_policy::reference)
        .def("Init", &UDeferredDataProviderGFxObject::Init)
          ;
}