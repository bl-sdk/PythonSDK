#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavigationHandle(py::module &m)
{
    py::class_< UInterface_NavigationHandle,  UInterface   >(m, "UInterface_NavigationHandle")
        .def("eventNotifyPathChanged", &UInterface_NavigationHandle::eventNotifyPathChanged)
          ;
}