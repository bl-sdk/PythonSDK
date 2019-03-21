#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverReference()
{
    class_< FCoverReference, bases< FActorReference >  >("FCoverReference", no_init)
        .def_readwrite("SlotIdx", &FCoverReference::SlotIdx)
  ;
}