#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavmeshCrossLevelConnection()
{
    class_< FGBXNavmeshCrossLevelConnection >("FGBXNavmeshCrossLevelConnection", no_init)
        .def_readonly("EdgeIdx", &FGBXNavmeshCrossLevelConnection::EdgeIdx)
        .def_readonly("ConnectedNavmeshIdx", &FGBXNavmeshCrossLevelConnection::ConnectedNavmeshIdx)
        .def_readonly("PolyIdx", &FGBXNavmeshCrossLevelConnection::PolyIdx)
  ;
}