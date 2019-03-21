#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerNickMetaData()
{
    class_< FPlayerNickMetaData >("FPlayerNickMetaData", no_init)
        .def_readwrite("PlayerNickName", &FPlayerNickMetaData::PlayerNickName)
        .def_readwrite("PlayerNickColumnName", &FPlayerNickMetaData::PlayerNickColumnName)
  ;
}