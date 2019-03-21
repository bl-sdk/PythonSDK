#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWireTerminal()
{
    class_< AWireTerminal, bases< AStaticMeshActor >  , boost::noncopyable>("AWireTerminal", no_init)
        .def_readwrite("NextTerminal", &AWireTerminal::NextTerminal)
        .def_readwrite("Linkages", &AWireTerminal::Linkages)
        .def_readwrite("WireMaterial", &AWireTerminal::WireMaterial)
        .def("StaticClass", &AWireTerminal::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AWireTerminal::eventDestroyed)
        .def("NotifyModifiedTerminal", &AWireTerminal::NotifyModifiedTerminal)
        .staticmethod("StaticClass")
  ;
}