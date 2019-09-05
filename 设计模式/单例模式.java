/**
 * @Date:   04-Jul-2018
 * @Email:  zengsw_study@qq.com
 * @Filename: Singleton.java
 * @Last modified time: 10-Jul-2018
 * @Copyright: ©2018 EndlessLethe. All rights reserved.
 */


// Not thread safe
public class Singleton() {
	private volatile static Singleton instance;
	private Singleton() {;}
	public static Singleton getInstance() {
		if (instance == null) {
			instance = new Singleton();
		}
		return instance;
	}
}

//Lazy Loading
public class Singleton() {
	private volatile static Singleton instance;
	private Singleton() {;}
	public static synchronized getInstance() {
		if (instance == null) {
			instance = new Singleton();
		}
		return instance;
	}
}

//effective lazy loading
public class Singleton() {
	private volatile static Singleton instance;
	private Singleton() {;}
	public static Singleton getInstance() {
		if (instance == null) {
			synchronized (Singleton.class) {
				if (instance == null) {
					instance = new Singleton();
				}
			}
		}
		return instance;
	}
}

//hungry loading
public class Singleton() {
	private static final Singleton instance = new Singleton();
	private Singleton() {;}
	public static Singleton getInstance() {
		return instance;
	}
}

//hungry loading + lazy loading
public class Singleton() {
	private static class SingletonHolder() {
		private static final Singleton instance = new Singleton();
	}
	public static final Singleton getInstance() {
		return SingletonHolder.instance;
	}
}

//use enum
public enum Singleton() {
	INSTANCE;

}
