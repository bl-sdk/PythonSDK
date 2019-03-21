#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCachedInvData()
{
    class_< FCachedInvData >("FCachedInvData", no_init)
        .def_readwrite("Inv", &FCachedInvData::Inv)
        .def_readwrite("TrashOrFavorite", &FCachedInvData::TrashOrFavorite)
  ;
}