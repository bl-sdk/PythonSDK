#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorForgetAboutTarget(py::module &m)
{
    py::class_< UTargetIteratorForgetAboutTarget,  UTargetIterator   >(m, "UTargetIteratorForgetAboutTarget")
		.def_static("StaticClass", &UTargetIteratorForgetAboutTarget::StaticClass, py::return_value_policy::reference)
          ;
}