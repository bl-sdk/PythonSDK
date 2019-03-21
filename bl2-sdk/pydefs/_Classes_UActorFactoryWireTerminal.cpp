#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWireTerminal()
{
    class_< UActorFactoryWireTerminal, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWireTerminal", no_init)
        .def("StaticClass", &UActorFactoryWireTerminal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}