#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCachedInvData()
{
    py::class_< FCachedInvData >("FCachedInvData")
        .def_readwrite("Inv", &FCachedInvData::Inv)
        .def_readwrite("TrashOrFavorite", &FCachedInvData::TrashOrFavorite)
  ;
}