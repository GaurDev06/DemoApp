import SwiftUI
import shared

struct ContentView: View {
	let greet = Greeting().greeting()
    
//    let image = Image(uiImage: UIImage(named: "women")!)
   
//    let convertToBmp = (UIImage(named: "women"))?.toData(options: [:], type: .bmp)
//
//    let uiImage = TorchModule().drawRectangle(img: convertToBmp)

	var body: some View {
		Text(greet)
//        Image(uiImage: image)
//                            .resizable()
//                            .aspectRatio(contentMode: .fit)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
