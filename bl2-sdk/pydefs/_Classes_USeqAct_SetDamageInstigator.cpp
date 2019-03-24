#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetDamageInstigator(py::module &m)
{
    py::class_< USeqAct_SetDamageInstigator,  USequenceAction   >(m, "USeqAct_SetDamageInstigator")
		.def_static("StaticClass", &USeqAct_SetDamageInstigator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageInstigator", &USeqAct_SetDamageInstigator::DamageInstigator)
          ;
}