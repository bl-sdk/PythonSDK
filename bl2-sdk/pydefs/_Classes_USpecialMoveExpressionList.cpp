#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMoveExpressionList(py::module &m)
{
    py::class_< USpecialMoveExpressionList,  USpecialMoveDefinition   >(m, "USpecialMoveExpressionList")
		.def_static("StaticClass", &USpecialMoveExpressionList::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpecialMoveList", &USpecialMoveExpressionList::SpecialMoveList)
        .def("Contains", &USpecialMoveExpressionList::Contains)
        .def("GetSMDToPlay", &USpecialMoveExpressionList::GetSMDToPlay, py::return_value_policy::reference)
          ;
}