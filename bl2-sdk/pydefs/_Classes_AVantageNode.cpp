#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVantageNode()
{
    class_< AVantageNode, bases< APathNode >  , boost::noncopyable>("AVantageNode", no_init)
        .def_readwrite("VantageOnAreas", &AVantageNode::VantageOnAreas)
        .def_readwrite("WeaponTypeFilters", &AVantageNode::WeaponTypeFilters)
        .def("StaticClass", &AVantageNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}