#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Possess(py::object m)
{
    py::class_< USeqAct_Possess,  USequenceAction   >(m, "USeqAct_Possess")
        .def_readwrite("PawnToPossess", &USeqAct_Possess::PawnToPossess)
        .def("StaticClass", &USeqAct_Possess::StaticClass, py::return_value_policy::reference)
          ;
}