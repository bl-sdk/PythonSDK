#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshSpecialMoveConnection()
{
    class_< FGBXNavMeshSpecialMoveConnection >("FGBXNavMeshSpecialMoveConnection", no_init)
        .def_readwrite("SrcPoly", &FGBXNavMeshSpecialMoveConnection::SrcPoly)
        .def_readwrite("SrcLocation", &FGBXNavMeshSpecialMoveConnection::SrcLocation)
        .def_readwrite("DestPoly", &FGBXNavMeshSpecialMoveConnection::DestPoly)
        .def_readwrite("DestLocation", &FGBXNavMeshSpecialMoveConnection::DestLocation)
        .def_readwrite("MoveId", &FGBXNavMeshSpecialMoveConnection::MoveId)
  ;
}