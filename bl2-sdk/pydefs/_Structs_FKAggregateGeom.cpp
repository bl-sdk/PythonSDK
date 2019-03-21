#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKAggregateGeom()
{
    py::class_< FKAggregateGeom >("FKAggregateGeom")
        .def_readwrite("SphereElems", &FKAggregateGeom::SphereElems)
        .def_readwrite("BoxElems", &FKAggregateGeom::BoxElems)
        .def_readwrite("SphylElems", &FKAggregateGeom::SphylElems)
        .def_readwrite("ConvexElems", &FKAggregateGeom::ConvexElems)
        .def_readwrite("RenderInfo", &FKAggregateGeom::RenderInfo)
  ;
}