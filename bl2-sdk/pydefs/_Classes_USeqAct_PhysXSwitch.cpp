#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PhysXSwitch(py::object m)
{
    py::class_< USeqAct_PhysXSwitch,  USequenceAction   >(m, "USeqAct_PhysXSwitch")
        .def("StaticClass", &USeqAct_PhysXSwitch::StaticClass, py::return_value_policy::reference)
          ;
}