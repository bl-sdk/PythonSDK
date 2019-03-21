#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKAggregateGeom()
{
    class_< FKAggregateGeom >("FKAggregateGeom", no_init)
        .def_readwrite("SphereElems", &FKAggregateGeom::SphereElems)
        .def_readwrite("BoxElems", &FKAggregateGeom::BoxElems)
        .def_readwrite("SphylElems", &FKAggregateGeom::SphylElems)
        .def_readwrite("ConvexElems", &FKAggregateGeom::ConvexElems)
        .def_readwrite("RenderInfo", &FKAggregateGeom::RenderInfo)
  ;
}