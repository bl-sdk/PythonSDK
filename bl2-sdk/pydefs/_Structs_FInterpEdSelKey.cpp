#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpEdSelKey()
{
    class_< FInterpEdSelKey >("FInterpEdSelKey", no_init)
        .def_readwrite("Group", &FInterpEdSelKey::Group)
        .def_readwrite("Track", &FInterpEdSelKey::Track)
        .def_readwrite("KeyIndex", &FInterpEdSelKey::KeyIndex)
        .def_readwrite("UnsnappedPosition", &FInterpEdSelKey::UnsnappedPosition)
  ;
}