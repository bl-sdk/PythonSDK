#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetShadowParent(py::module &m)
{
    py::class_< USeqAct_SetShadowParent,  USequenceAction   >(m, "USeqAct_SetShadowParent")
          ;
}