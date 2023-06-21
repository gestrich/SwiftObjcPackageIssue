//
//  AnimalPrinter.swift
//  SimpleApp
//
//  Created by Bill Gestrich on 6/20/23.
//

import Foundation
import TestPackage

class AnimalPrinter {
    

    func print() {

        //Can Access Swift Package directly
        let zebra  = Zebra()

        //Objective-C Issues

        let animalFactory = AnimalFactory()

        //Compiles ok
        animalFactory.printHeader()

        // Compile error
        animalFactory.getZebra()
    }
}
