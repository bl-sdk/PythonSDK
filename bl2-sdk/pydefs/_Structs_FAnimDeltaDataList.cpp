#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimDeltaDataList()
{
    py::class_< FAnimDeltaDataList >("FAnimDeltaDataList")
        .def_readwrite("IndexList", &FAnimDeltaDataList::IndexList)
  ;
}