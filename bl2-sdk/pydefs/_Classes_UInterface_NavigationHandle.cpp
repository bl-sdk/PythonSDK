#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavigationHandle()
{
    py::class_< UInterface_NavigationHandle,  UInterface   >("UInterface_NavigationHandle")
        .def("StaticClass", &UInterface_NavigationHandle::StaticClass, py::return_value_policy::reference)
        .def("eventNotifyPathChanged", &UInterface_NavigationHandle::eventNotifyPathChanged)
        .staticmethod("StaticClass")
  ;
}