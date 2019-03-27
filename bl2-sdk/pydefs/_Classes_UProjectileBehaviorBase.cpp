#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehaviorBase(py::module &m)
{
    py::class_< UProjectileBehaviorBase,  UBehaviorBase   >(m, "UProjectileBehaviorBase")
		.def_static("StaticClass", &UProjectileBehaviorBase::StaticClass, py::return_value_policy::reference)
          ;
}