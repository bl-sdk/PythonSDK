#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Union(py::module &m)
{
    py::class_< USeqVar_Union,  USequenceVariable   >(m, "USeqVar_Union")
          ;
}