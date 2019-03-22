#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USavingSequenceFrame(py::module &m)
{
    py::class_< USavingSequenceFrame,  USequenceFrame   >(m, "USavingSequenceFrame")
          ;
}