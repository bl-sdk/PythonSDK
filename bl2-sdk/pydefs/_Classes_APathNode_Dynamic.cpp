#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APathNode_Dynamic()
{
    class_< APathNode_Dynamic, bases< APathNode >  , boost::noncopyable>("APathNode_Dynamic", no_init)
        .def("StaticClass", &APathNode_Dynamic::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDebugAbbrev", &APathNode_Dynamic::eventGetDebugAbbrev)
        .staticmethod("StaticClass")
  ;
}