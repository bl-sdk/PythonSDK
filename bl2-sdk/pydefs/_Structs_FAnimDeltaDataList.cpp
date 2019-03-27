#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimDeltaDataList(py::module &m)
{
    py::class_< FAnimDeltaDataList >(m, "FAnimDeltaDataList")
        .def_readwrite("IndexList", &FAnimDeltaDataList::IndexList)
  ;
}