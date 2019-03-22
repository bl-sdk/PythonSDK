#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUBMGameOverGFxObject(py::module &m)
{
    py::class_< UUBMGameOverGFxObject,  UGFxObject   >(m, "UUBMGameOverGFxObject")
        .def("SetPlayerInfo", &UUBMGameOverGFxObject::SetPlayerInfo)
          ;
}