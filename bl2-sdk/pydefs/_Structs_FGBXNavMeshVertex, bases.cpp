#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshVertex()
{
    class_< FGBXNavMeshVertex, bases< FVector >  >("FGBXNavMeshVertex", no_init)
  ;
}