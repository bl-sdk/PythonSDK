#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIResourceRestriction()
{
    class_< FAIResourceRestriction >("FAIResourceRestriction", no_init)
        .def_readwrite("MaxUsers", &FAIResourceRestriction::MaxUsers)
        .def_readwrite("MinUsers", &FAIResourceRestriction::MinUsers)
        .def_readwrite("Resource", &FAIResourceRestriction::Resource)
  ;
}