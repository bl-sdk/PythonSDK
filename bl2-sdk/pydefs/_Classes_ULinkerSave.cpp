#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULinkerSave(py::module &m)
{
    py::class_< ULinkerSave,  UObject   >(m, "ULinkerSave")
          ;
}