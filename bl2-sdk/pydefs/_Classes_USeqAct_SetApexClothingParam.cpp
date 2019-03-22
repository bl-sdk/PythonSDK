#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetApexClothingParam(py::module &m)
{
    py::class_< USeqAct_SetApexClothingParam,  USequenceAction   >(m, "USeqAct_SetApexClothingParam")
          ;
}