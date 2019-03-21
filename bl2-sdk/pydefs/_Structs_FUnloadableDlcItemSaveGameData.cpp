#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcItemSaveGameData()
{
    class_< FUnloadableDlcItemSaveGameData >("FUnloadableDlcItemSaveGameData", no_init)
        .def_readwrite("SerialNumber", &FUnloadableDlcItemSaveGameData::SerialNumber)
        .def_readwrite("Quantity", &FUnloadableDlcItemSaveGameData::Quantity)
        .def_readwrite("Mark", &FUnloadableDlcItemSaveGameData::Mark)
  ;
}