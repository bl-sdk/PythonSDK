#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_PawnMaterialParam(py::module &m)
{
    py::class_< UAnimNotify_PawnMaterialParam,  UAnimNotify_Scripted   >(m, "UAnimNotify_PawnMaterialParam")
		.def_static("StaticClass", &UAnimNotify_PawnMaterialParam::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ScalarParameterInterpArray", &UAnimNotify_PawnMaterialParam::ScalarParameterInterpArray)
        .def("eventNotify", &UAnimNotify_PawnMaterialParam::eventNotify)
          ;
}