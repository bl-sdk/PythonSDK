#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Byte(py::module &m)
{
    py::class_< USeqVar_Byte,  USequenceVariable   >(m, "USeqVar_Byte")
          ;
}