#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMetaData(py::module &m)
{
    py::class_< UMetaData,  UObject   >(m, "UMetaData")
          ;
}