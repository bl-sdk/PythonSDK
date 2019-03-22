#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimMetaData(py::module &m)
{
    py::class_< UAnimMetaData,  UObject   >(m, "UAnimMetaData")
          ;
}