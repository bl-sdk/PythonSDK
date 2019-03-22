#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetPhysics(py::module &m)
{
    py::class_< USeqAct_SetPhysics,  USequenceAction   >(m, "USeqAct_SetPhysics")
        .def_readwrite("newPhysics", &USeqAct_SetPhysics::newPhysics)
        .def("StaticClass", &USeqAct_SetPhysics::StaticClass, py::return_value_policy::reference)
          ;
}