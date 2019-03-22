#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathSwitch(py::module &m)
{
    py::class_< UInterface_NavMeshPathSwitch,  UInterface_NavMeshPathObject   >(m, "UInterface_NavMeshPathSwitch")
        .def("eventAIActivateSwitch", &UInterface_NavMeshPathSwitch::eventAIActivateSwitch)
          ;
}