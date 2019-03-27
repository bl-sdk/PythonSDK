#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIStateBase(py::module &m)
{
    py::class_< UAIStateBase,  UGearboxEditorNode   >(m, "UAIStateBase")
		.def_static("StaticClass", &UAIStateBase::StaticClass, py::return_value_policy::reference)
          ;
}